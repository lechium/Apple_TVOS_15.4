//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _ML3ValidatableDatabase : NSObject
{
    unsigned long long _queueID;	// 8 = 0x8
    NSString *_databasePath;	// 16 = 0x10
    unsigned long long _validationState;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_validationSerialQueue;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000018367a
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *validationSerialQueue; // @synthesize validationSerialQueue=_validationSerialQueue;
@property(nonatomic) unsigned long long validationState; // @synthesize validationState=_validationState;
@property(copy, nonatomic) NSString *databasePath; // @synthesize databasePath=_databasePath;
- (_Bool)currentQueueIsValidationQueue;	// IMP=0x000000000018360f
- (id)init;	// IMP=0x00000000001835cd
- (id)initWithDatabasePath:(id)arg1;	// IMP=0x000000000018347b

@end

