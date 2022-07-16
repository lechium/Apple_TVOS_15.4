//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CLLocation, NSArray, NSDate, NSNumber, NSSet, NSString, NSURL;

@interface PLSyncSaveJob : NSObject
{
    _Bool hasVideoComplement;	// 8 = 0x8
    _Bool isVideo;	// 9 = 0x9
    _Bool isSyncComplete;	// 10 = 0xa
    _Bool _cleanupSyncState;	// 11 = 0xb
    NSArray *facesInfo;	// 16 = 0x10
    NSURL *originalAssetURL;	// 24 = 0x18
    NSURL *videoComplementURL;	// 32 = 0x20
    NSString *uuid;	// 40 = 0x28
    NSDate *creationDate;	// 48 = 0x30
    NSDate *modificationDate;	// 56 = 0x38
    NSSet *albumURIs;	// 64 = 0x40
    CLLocation *location;	// 72 = 0x48
    NSNumber *sortToken;	// 80 = 0x50
    NSString *originalFileName;	// 88 = 0x58
    NSDate *_cleanupBeforeDate;	// 96 = 0x60
    CDUnknownBlockType _finishedBlock;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x000000000029b441
@property(copy, nonatomic) CDUnknownBlockType finishedBlock; // @synthesize finishedBlock=_finishedBlock;
@property(copy, nonatomic) NSDate *cleanupBeforeDate; // @synthesize cleanupBeforeDate=_cleanupBeforeDate;
@property(nonatomic) _Bool cleanupSyncState; // @synthesize cleanupSyncState=_cleanupSyncState;
@property(nonatomic) _Bool isSyncComplete; // @synthesize isSyncComplete;
@property(retain, nonatomic) NSString *originalFileName; // @synthesize originalFileName;
@property(retain, nonatomic) NSNumber *sortToken; // @synthesize sortToken;
@property(copy, nonatomic) CLLocation *location; // @synthesize location;
@property(copy, nonatomic) NSSet *albumURIs; // @synthesize albumURIs;
@property(copy, nonatomic) NSDate *modificationDate; // @synthesize modificationDate;
@property(copy, nonatomic) NSDate *creationDate; // @synthesize creationDate;
@property(copy, nonatomic) NSString *uuid; // @synthesize uuid;
@property(nonatomic) _Bool isVideo; // @synthesize isVideo;
@property(nonatomic) _Bool hasVideoComplement; // @synthesize hasVideoComplement;
@property(retain, nonatomic) NSURL *videoComplementURL; // @synthesize videoComplementURL;
@property(retain, nonatomic) NSURL *originalAssetURL; // @synthesize originalAssetURL;
@property(retain, nonatomic) NSArray *facesInfo; // @synthesize facesInfo;
- (id)description;	// IMP=0x000000000029b10a
- (void)processFacesWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000029aeba
- (id)serializedData;	// IMP=0x000000000029a6ac
- (id)initFromSerializedData:(id)arg1;	// IMP=0x0000000000299e72

@end
