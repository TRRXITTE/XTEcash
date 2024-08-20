#ifndef BITCOIN_CHAINPARAMSSEEDS_H
#define BITCOIN_CHAINPARAMSSEEDS_H
/**
 * List of fixed seed nodes for the bitcoin network
 * AUTOGENERATED by contrib/seeds/generate-seeds.py
 *
 * Each line contains a BIP155 serialized (networkID, addr, port) tuple.
 */
static const uint8_t chainparams_seed_main[] = {
    0x01,0x04,0x23,0xf6,0x0a,0xf6,0x21,0x34,
    0x01,0x04,0x22,0x6b,0x7b,0xcb,0x21,0x34,
};

static const uint8_t chainparams_seed_test[] = {
    0x01,0x04,0x23,0xf6,0x0a,0xf6,0x21,0x34,
    0x01,0x04,0x22,0x6b,0x7b,0xcb,0x21,0x34,
};
#endif // BITCOIN_CHAINPARAMSSEEDS_H
