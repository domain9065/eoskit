#pragma once

namespace kh {

    namespace helper {

        //@abi table maker i64
        struct [[eosio::table]] single_val_item_uint32_t {
            account_name key;
            uint32_t val;

            uint64_t primary_key() const {
                return key;
            }

            EOSLIB_SERIALIZE(single_val_item_uint32_t, (key)(val)
            )
        };

        //@abi table maker i64
        struct [[eosio::table]] single_val_item_string_t {
            account_name key;
            std::string val;

            uint64_t primary_key() const {
                return key;
            }

            EOSLIB_SERIALIZE(single_val_item_string_t, (key)(val)
            )
        };

        //@abi table maker i64
        struct [[eosio::table]] single_val_item_asset_t {
            account_name key;
            eosio::asset val;

            uint64_t primary_key() const {
                return key;
            }

            EOSLIB_SERIALIZE(single_val_item_asset_t, (key)(val)
            )
        };

        //@abi table maker i64
        struct [[eosio::table]] field_all_in_one_t {
            account_name key;

            uint32_t vint;
            std::string vstr;
            account_name vaname;
            eosio::asset vasset;

            uint64_t primary_key() const {
                return key;
            }

            EOSLIB_SERIALIZE(field_all_in_one_t, (key)(vint)(vstr)(vaname)(vasset)
            )
        };
    }
}


