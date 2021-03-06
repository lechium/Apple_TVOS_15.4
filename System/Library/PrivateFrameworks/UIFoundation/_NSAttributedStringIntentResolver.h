//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIFoundation/_NSAttributedStringIntentResolution-Protocol.h>

@class NSString;

@interface _NSAttributedStringIntentResolver : NSObject <_NSAttributedStringIntentResolution>
{
}

+ (id)fontAttributeValueForInlinePresentationIntent:(unsigned long long)arg1 suggestedBaseFont:(id)arg2 suggestingTheDefaultFont:(_Bool)arg3;	// IMP=0x000000000006a78b
+ (id)fontAttributeValueForInlineIntent:(long long)arg1 suggestedBaseFont:(id)arg2 suggestingTheDefaultFont:(_Bool)arg3;	// IMP=0x000000000006a783
+ (void)_replaceInlinePresentationIntent:(id)arg1 get:(CDUnknownBlockType)arg2 set:(CDUnknownBlockType)arg3;	// IMP=0x000000000006a670
+ (void)_replaceInlinePresentationIntentInString:(id)arg1 range:(struct _NSRange)arg2 value:(id)arg3;	// IMP=0x000000000006a545
+ (id)attributesByResolvingIntentsInAttributes:(id)arg1;	// IMP=0x000000000006a34f
+ (void)resolveAttributedString:(id)arg1 inRange:(struct _NSRange)arg2;	// IMP=0x000000000006a254
+ (id)attributedStringByResolvingString:(id)arg1;	// IMP=0x000000000006a1fd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

