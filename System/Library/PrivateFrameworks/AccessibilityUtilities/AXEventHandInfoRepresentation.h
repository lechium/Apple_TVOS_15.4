//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AccessibilityUtilities/AXEventRepresentationDescription-Protocol.h>
#import <AccessibilityUtilities/NSCopying-Protocol.h>
#import <AccessibilityUtilities/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface AXEventHandInfoRepresentation : NSObject <AXEventRepresentationDescription, NSSecureCoding, NSCopying>
{
    unsigned char _systemGesturePossible;	// 8 = 0x8
    unsigned char _swipe;	// 9 = 0x9
    unsigned short _initialFingerCount;	// 10 = 0xa
    unsigned short _currentFingerCount;	// 12 = 0xc
    unsigned int _eventType;	// 16 = 0x10
    unsigned int _handIdentity;	// 20 = 0x14
    unsigned int _handIndex;	// 24 = 0x18
    unsigned int _handEventMask;	// 28 = 0x1c
    unsigned int _additionalHandEventFlagsForGeneratedEvents;	// 32 = 0x20
    NSArray *_paths;	// 40 = 0x28
    unsigned long long _length;	// 48 = 0x30
    struct CGPoint _handPosition;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000005897
- (void).cxx_destruct;	// IMP=0x00000000000062b9
@property(nonatomic) unsigned char swipe; // @synthesize swipe=_swipe;
@property(readonly, nonatomic) unsigned long long length; // @synthesize length=_length;
@property(nonatomic) unsigned int additionalHandEventFlagsForGeneratedEvents; // @synthesize additionalHandEventFlagsForGeneratedEvents=_additionalHandEventFlagsForGeneratedEvents;
@property(nonatomic) unsigned int handEventMask; // @synthesize handEventMask=_handEventMask;
@property(nonatomic) struct CGPoint handPosition; // @synthesize handPosition=_handPosition;
@property(nonatomic) unsigned int handIndex; // @synthesize handIndex=_handIndex;
@property(nonatomic) unsigned int handIdentity; // @synthesize handIdentity=_handIdentity;
@property(nonatomic) unsigned char systemGesturePossible; // @synthesize systemGesturePossible=_systemGesturePossible;
@property(retain, nonatomic) NSArray *paths; // @synthesize paths=_paths;
@property(nonatomic) unsigned short currentFingerCount; // @synthesize currentFingerCount=_currentFingerCount;
@property(nonatomic) unsigned short initialFingerCount; // @synthesize initialFingerCount=_initialFingerCount;
@property(nonatomic) unsigned int eventType; // @synthesize eventType=_eventType;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool isStylus;
- (id)accessibilityEventRepresentationTabularDescription;	// IMP=0x0000000000005d69
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000005c18
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000005a37
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000589f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

