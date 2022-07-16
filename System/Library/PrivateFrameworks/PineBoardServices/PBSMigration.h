//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError, NSString;

@interface PBSMigration : NSObject
{
    Class _handlingClass;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    CDUnknownBlockType _handler;	// 24 = 0x18
    unsigned long long _state;	// 32 = 0x20
    NSError *_error;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000085c80
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) unsigned long long state; // @synthesize state=_state;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (unsigned long long)executeMigrationWithContext:(id)arg1;	// IMP=0x0000000000085af0
- (id)initWithName:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000859a0
- (id)initWithHandlingClass:(Class)arg1;	// IMP=0x00000000000858c0
- (id)init;	// IMP=0x0000000000085890

@end

