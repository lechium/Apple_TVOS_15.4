//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <RequestDispatcherBridges/AFContextSnapshot-Protocol.h>
#import <RequestDispatcherBridges/NSSecureCoding-Protocol.h>

@class MISSING_TYPE;

@interface _TtC24RequestDispatcherBridges30ConversationalContextContainer : NSObject <AFContextSnapshot, NSSecureCoding>
{
    MISSING_TYPE *systemDialogActs;	// 8 = 0x8
    MISSING_TYPE *activeTasks;	// 16 = 0x10
    MISSING_TYPE *executedTasks;	// 24 = 0x18
    MISSING_TYPE *entities;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000032d30
- (void).cxx_destruct;	// IMP=0x0000000000034dc0
- (id)init;	// IMP=0x0000000000034d60
- (id)serializedBackingStore;	// IMP=0x0000000000034c80
- (id)initWithSerializedBackingStore:(id)arg1;	// IMP=0x00000000000349c0
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000034440
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000033530

@end

