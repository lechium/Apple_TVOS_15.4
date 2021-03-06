//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSMutableArray, NSSet, NSString;

@interface MAAssetQuery : NSObject
{
    _Bool _isPallasResult;	// 8 = 0x8
    _Bool _isDone;	// 9 = 0x9
    _Bool _doNotBlockBeforeFirstUnlock;	// 10 = 0xa
    _Bool _doNotBlockOnNetworkStatus;	// 11 = 0xb
    long long _resultCode;	// 16 = 0x10
    NSDate *_postedDate;	// 24 = 0x18
    NSMutableArray *_queryParams;	// 32 = 0x20
    NSString *_assetType;	// 40 = 0x28
    NSArray *_results;	// 48 = 0x30
    NSSet *_assetIds;	// 56 = 0x38
    long long _returnTypes;	// 64 = 0x40
    NSDate *_lastFetchDate;	// 72 = 0x48
    NSString *_purpose;	// 80 = 0x50
}

@property(retain, nonatomic) NSString *purpose; // @synthesize purpose=_purpose;
@property(readonly, nonatomic) NSDate *lastFetchDate; // @synthesize lastFetchDate=_lastFetchDate;
@property(readonly, nonatomic) long long returnTypes; // @synthesize returnTypes=_returnTypes;
@property(readonly, nonatomic) NSSet *assetIds; // @synthesize assetIds=_assetIds;
@property(readonly, nonatomic) NSArray *results; // @synthesize results=_results;
@property(nonatomic) _Bool doNotBlockOnNetworkStatus; // @synthesize doNotBlockOnNetworkStatus=_doNotBlockOnNetworkStatus;
@property(readonly, nonatomic) NSString *assetType; // @synthesize assetType=_assetType;
@property(readonly, nonatomic) NSMutableArray *queryParams; // @synthesize queryParams=_queryParams;
@property(nonatomic) _Bool doNotBlockBeforeFirstUnlock; // @synthesize doNotBlockBeforeFirstUnlock=_doNotBlockBeforeFirstUnlock;
@property(readonly, nonatomic) NSDate *postedDate; // @synthesize postedDate=_postedDate;
@property(readonly, nonatomic) long long resultCode; // @synthesize resultCode=_resultCode;
@property(readonly, nonatomic) _Bool isDone; // @synthesize isDone=_isDone;
- (id)description;	// IMP=0x000000000000d296
- (_Bool)isCatalogFetchedFromLiveServer;	// IMP=0x000000000000d28d
- (_Bool)isCatalogFetchedWithinThePastFewDays:(int)arg1;	// IMP=0x000000000000d1c2
- (long long)queryMetaDataSync;	// IMP=0x000000000000ce6f
- (long long)queryInstalledAssetIds;	// IMP=0x000000000000caea
- (void)queryMetaDataWithError:(CDUnknownBlockType)arg1;	// IMP=0x000000000000c9a1
- (void)queryMetaData:(CDUnknownBlockType)arg1;	// IMP=0x000000000000c93c
- (void)getResultsFromMessage:(id)arg1;	// IMP=0x000000000000c3d6
- (long long)addKeyValuePair:(id)arg1 with:(id)arg2;	// IMP=0x000000000000c32b
- (long long)addKeyValueNull:(id)arg1;	// IMP=0x000000000000c296
- (long long)addKeyValueArray:(id)arg1 with:(id)arg2;	// IMP=0x000000000000c06c
- (void)returnTypes:(long long)arg1;	// IMP=0x000000000000c062
- (void)augmentResultsWithState:(_Bool)arg1;	// IMP=0x000000000000c05c
- (void)dealloc;	// IMP=0x000000000000bfef
- (id)initWithType:(id)arg1;	// IMP=0x000000000000bfdb
- (id)initWithType:(id)arg1 andPurpose:(id)arg2;	// IMP=0x000000000000bf34

@end

