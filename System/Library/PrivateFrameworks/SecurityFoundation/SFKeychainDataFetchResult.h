//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SFKeychainData;

@interface SFKeychainDataFetchResult
{
    id _dataFetchResult;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000cb7a
- (void)fetchValueWithAuthenticationContext:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000cb74

// Remaining properties
@property(readonly) SFKeychainData *value; // @dynamic value;

@end

