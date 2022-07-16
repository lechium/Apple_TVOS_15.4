//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VoiceShortcutClient/WFTTSStringAnnotation-Protocol.h>
#import <VoiceShortcutClient/WFTTSStringComponent-Protocol.h>

@class NSString;

@interface WFTTSSpokenVariant : NSObject <WFTTSStringAnnotation, WFTTSStringComponent>
{
    NSString *_displayString;	// 8 = 0x8
    NSString *_spokenString;	// 16 = 0x10
}

+ (id)parseAnnotationString:(id)arg1;	// IMP=0x000000000002f9de
- (void).cxx_destruct;	// IMP=0x000000000002f9b6
@property(readonly, nonatomic) NSString *spokenString; // @synthesize spokenString=_spokenString;
@property(readonly, nonatomic) NSString *displayString; // @synthesize displayString=_displayString;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002f7bd
- (id)initWithDisplayString:(id)arg1 spokenString:(id)arg2;	// IMP=0x000000000002f60a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
