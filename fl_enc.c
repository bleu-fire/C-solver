#include <openssl/rsa.h>
#include <stdio.h>
#include <string.h>
#include <openssl/aes.h>
#include <openssl/err.h>
#include <openssl/pem.h>
#include <openssl/evp.h>

char* genrate_RSA_Key(const char *pub_Key_File, const char *priv_Key_File) {
    EVP_PKEY_CTX *ctx = EVP_PKEY_CTX_new_id(EVP_PKEY_RSA, NULL);
    EVP_PKEY *pkey = NULL;

    EVP_PKEY_keygen_init(ctx);
    EVP_PKEY_CTX_set_rsa_keygen_bits(ctx, 2048);
    EVP_PKEY_keygen(ctx, &pkey);

    FILE *priv = fopen(priv_Key_File, "w");
    PEM_write_PrivateKey(priv, pkey, NULL, NULL, 0, NULL, NULL);
    fclose(priv);

    FILE *pub = fopen(pub_Key_File, "w");
    PEM_write_PUBKEY(pub, pkey);
    fclose(pub);

    EVP_PKEY_free(pkey);
    EVP_PKEY_CTX_free(ctx);

    return "RSA Key Generated!\n";
}

char Encrypt_File(){

}

char Decryption (){

}


int main() {
    printf("%s", genrate_RSA_Key("pub.pem", "priv.pem"));


}
