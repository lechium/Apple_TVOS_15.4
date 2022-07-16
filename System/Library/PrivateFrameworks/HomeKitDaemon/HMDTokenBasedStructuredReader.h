//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface HMDTokenBasedStructuredReader
{
    struct _HMDStructuredDataToken _token;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000086e4a1
- (struct _HMDStructuredDataToken)nextTokenAfterToken:(const struct _HMDStructuredDataToken *)arg1;	// IMP=0x000000000086e3f9
- (void)skipToken;	// IMP=0x000000000086e3dd
- (struct _HMDStructuredDataToken)readToken;	// IMP=0x000000000086e385
- (id)readUUID;	// IMP=0x000000000086e376
- (id)readDate;	// IMP=0x000000000086e367
- (id)readData;	// IMP=0x000000000086e358
- (id)readNumber;	// IMP=0x000000000086e349
- (id)readString;	// IMP=0x000000000086e33a
- (_Bool)readBoolean;	// IMP=0x000000000086e2fa
- (void)readNull;	// IMP=0x000000000086e2e2
- (void)endDictionary;	// IMP=0x000000000086e2ca
- (id)readDictionaryKey;	// IMP=0x000000000086e2bb
- (unsigned long long)beginDictionary;	// IMP=0x000000000086e26d
- (void)endArray;	// IMP=0x000000000086e255
- (unsigned long long)beginArray;	// IMP=0x000000000086e207
- (void)failWithError:(id)arg1;	// IMP=0x000000000086e17f
- (id)error;	// IMP=0x000000000086e15e
- (long long)tokenType;	// IMP=0x000000000086e13e

@end

