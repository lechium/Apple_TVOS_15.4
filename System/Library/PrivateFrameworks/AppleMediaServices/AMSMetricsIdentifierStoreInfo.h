//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface AMSMetricsIdentifierStoreInfo : NSObject
{
    _Bool _crossDeviceSync;	// 8 = 0x8
    _Bool _deleted;	// 9 = 0x9
    NSString *_account;	// 16 = 0x10
    double _resetInterval;	// 24 = 0x18
    NSDate *_started;	// 32 = 0x20
    NSString *_storeKey;	// 40 = 0x28
    NSString *_storeUUID;	// 48 = 0x30
    NSDate *_lastSync;	// 56 = 0x38
    NSDate *_modified;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000001a0986
@property(retain, nonatomic) NSDate *modified; // @synthesize modified=_modified;
@property(retain, nonatomic) NSDate *lastSync; // @synthesize lastSync=_lastSync;
@property(nonatomic) _Bool deleted; // @synthesize deleted=_deleted;
@property(retain, nonatomic) NSString *storeUUID; // @synthesize storeUUID=_storeUUID;
@property(retain, nonatomic) NSString *storeKey; // @synthesize storeKey=_storeKey;
@property(retain, nonatomic) NSDate *started; // @synthesize started=_started;
@property(nonatomic) double resetInterval; // @synthesize resetInterval=_resetInterval;
@property(nonatomic) _Bool crossDeviceSync; // @synthesize crossDeviceSync=_crossDeviceSync;
@property(retain, nonatomic) NSString *account; // @synthesize account=_account;

@end

