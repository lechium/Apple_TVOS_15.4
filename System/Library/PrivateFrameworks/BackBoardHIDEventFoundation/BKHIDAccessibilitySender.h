//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BackBoardHIDEventFoundation/BKHIDEventSenderInfo-Protocol.h>

@class BKSHIDEventSenderDescriptor, NSString;

@interface BKHIDAccessibilitySender : NSObject <BKHIDEventSenderInfo>
{
    _Bool _authenticated;	// 8 = 0x8
    _Bool _builtIn;	// 9 = 0x9
    int _eventSource;	// 12 = 0xc
    unsigned int _primaryUsagePage;	// 16 = 0x10
    unsigned int _primaryUsage;	// 20 = 0x14
    NSString *_displayUUID;	// 24 = 0x18
    unsigned long long _senderID;	// 32 = 0x20
    BKSHIDEventSenderDescriptor *_senderDescriptor;	// 40 = 0x28
}

+ (id)accessibilityHIDServices;	// IMP=0x0000000000001a73
- (void).cxx_destruct;	// IMP=0x0000000000001a4b
@property(copy, nonatomic) BKSHIDEventSenderDescriptor *senderDescriptor; // @synthesize senderDescriptor=_senderDescriptor;
@property(nonatomic, getter=isBuiltIn) _Bool builtIn; // @synthesize builtIn=_builtIn;
@property(nonatomic, getter=isAuthenticated) _Bool authenticated; // @synthesize authenticated=_authenticated;
@property(nonatomic) unsigned int primaryUsage; // @synthesize primaryUsage=_primaryUsage;
@property(nonatomic) unsigned int primaryUsagePage; // @synthesize primaryUsagePage=_primaryUsagePage;
@property(nonatomic) unsigned long long senderID; // @synthesize senderID=_senderID;
@property(nonatomic) int eventSource; // @synthesize eventSource=_eventSource;
@property(copy, nonatomic) NSString *displayUUID; // @synthesize displayUUID=_displayUUID;
- (id)initWithSenderID:(unsigned long long)arg1;	// IMP=0x000000000000193a
@property(readonly, nonatomic) _Bool isPencilDigitizer;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

