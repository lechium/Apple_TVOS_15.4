//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BackBoardServices/BSDescriptionProviding-Protocol.h>
#import <BackBoardServices/BSDescriptionStreamable-Protocol.h>
#import <BackBoardServices/BSProtobufSerializable-Protocol.h>
#import <BackBoardServices/NSCopying-Protocol.h>

@class BKSHIDEventAuthenticationMessage, BKSHIDEventDeferringEnvironment, BKSHIDEventDeferringToken, BKSHIDEventDisplay, NSString;

@interface BKSHIDEventBaseAttributes : NSObject <BSDescriptionProviding, BSProtobufSerializable, NSCopying, BSDescriptionStreamable>
{
    unsigned short _options;	// 8 = 0x8
    int _source;	// 12 = 0xc
    BKSHIDEventAuthenticationMessage *_authenticationMessage;	// 16 = 0x10
    BKSHIDEventDeferringEnvironment *_environment;	// 24 = 0x18
    BKSHIDEventDisplay *_display;	// 32 = 0x20
    BKSHIDEventDeferringToken *_token;	// 40 = 0x28
}

+ (id)baseAttributesFromResolution:(id)arg1;	// IMP=0x000000000001287f
+ (id)protobufSchema;	// IMP=0x000000000001281c
- (void).cxx_destruct;	// IMP=0x0000000000012665
@property(nonatomic) unsigned short options; // @synthesize options=_options;
@property(nonatomic) int source; // @synthesize source=_source;
@property(retain, nonatomic) BKSHIDEventDeferringToken *token; // @synthesize token=_token;
@property(retain, nonatomic) BKSHIDEventDisplay *display; // @synthesize display=_display;
@property(retain, nonatomic) BKSHIDEventDeferringEnvironment *environment; // @synthesize environment=_environment;
@property(retain, nonatomic) BKSHIDEventAuthenticationMessage *authenticationMessage; // @synthesize authenticationMessage=_authenticationMessage;
- (void)appendDescriptionToFormatter:(id)arg1;	// IMP=0x00000000000124ac
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000012461
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000012411
- (id)succinctDescriptionBuilder;	// IMP=0x00000000000123f5
- (id)succinctDescription;	// IMP=0x00000000000123a5
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000122e9
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000012249
@property(readonly, nonatomic) unsigned int contextID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
