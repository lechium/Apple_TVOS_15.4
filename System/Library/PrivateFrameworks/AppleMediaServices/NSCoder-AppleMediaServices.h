//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSCoder.h>

@interface NSCoder (AppleMediaServices)
- (void)ams_encodePropertyListDictionary:(id)arg1 format:(unsigned long long)arg2 forKey:(id)arg3;	// IMP=0x0000000000252b47
- (void)ams_encodePropertyListArray:(id)arg1 format:(unsigned long long)arg2 forKey:(id)arg3;	// IMP=0x0000000000252980
- (void)ams_encodeJSONDictionary:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000002527b7
- (void)ams_encodeJSONArray:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000002525ee
- (id)ams_decodePropertyListDictionaryForKey:(id)arg1;	// IMP=0x00000000002523d0
- (id)ams_decodePropertyListArrayForKey:(id)arg1;	// IMP=0x00000000002521b2
- (id)ams_decodeJSONDictionaryForKey:(id)arg1;	// IMP=0x0000000000251f94
- (id)ams_decodeJSONArrayForKey:(id)arg1;	// IMP=0x0000000000251d76
- (_Bool)_ams_encodePropertyListObject:(id)arg1 forKey:(id)arg2 format:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x0000000000251cde
- (_Bool)_ams_encodeJSONObject:(id)arg1 forKey:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000251a94
- (id)_ams_decodeJSONObjectForKey:(id)arg1 error:(id *)arg2;	// IMP=0x00000000002519f4
- (id)_ams_decodePropertyListObjectForKey:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000251951
@end
