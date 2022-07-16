//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface PKNotifyRegistration : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    struct os_unfair_lock_s _lock;	// 16 = 0x10
    int _token;	// 20 = 0x14
    NSMutableArray *_subregistrations;	// 24 = 0x18
    _Bool _invalidated;	// 32 = 0x20
    NSString *_name;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000176818
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (_Bool)hasSubregistrations;	// IMP=0x00000000001767bd
- (void)removeInvalidatedSubregistration:(id)arg1;	// IMP=0x00000000001766ac
- (id)subregisterWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000176610
- (void)invalidate;	// IMP=0x0000000000176419
- (void)dealloc;	// IMP=0x00000000001763db
- (id)initWithName:(id)arg1;	// IMP=0x0000000000175fc9
- (id)init;	// IMP=0x0000000000175fbb

@end

