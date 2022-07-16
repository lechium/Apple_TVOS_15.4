//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_os_transaction;

@interface DMFOSStateHandler : NSObject
{
    CDUnknownBlockType _block;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    unsigned long long _handle;	// 24 = 0x18
    NSObject<OS_os_transaction> *_transaction;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000002da33
@property(retain, nonatomic) NSObject<OS_os_transaction> *transaction; // @synthesize transaction=_transaction;
@property(nonatomic) unsigned long long handle; // @synthesize handle=_handle;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
- (void)dealloc;	// IMP=0x000000000002d998
- (struct os_state_data_s *)_serializeState;	// IMP=0x000000000002d7d0
- (id)initWithQueue:(id)arg1 name:(id)arg2 stateHandlerBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000002d558

@end

