//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString;

@interface WFShareSheetSafariWebPage
{
    NSString *_selectionText;	// 8 = 0x8
    NSData *_selectionHTML;	// 16 = 0x10
    NSString *_javaScriptRunnerIdentifier;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000bfcce
+ (id)webPageFromPreprocessingResult:(id)arg1 javaScriptRunnerIdentifier:(id)arg2;	// IMP=0x00000000000bfa55
- (void).cxx_destruct;	// IMP=0x00000000000bfa13
@property(readonly, copy, nonatomic) NSString *javaScriptRunnerIdentifier; // @synthesize javaScriptRunnerIdentifier=_javaScriptRunnerIdentifier;
- (id)selectionHTML;	// IMP=0x00000000000bf9f1
- (id)selectionText;	// IMP=0x00000000000bf9e0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000bf8d7
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000bf79c
- (id)initWithURL:(id)arg1 pageTitle:(id)arg2 selectionText:(id)arg3 selectionHTML:(id)arg4 documentHTML:(id)arg5 javaScriptRunnerIdentifier:(id)arg6;	// IMP=0x00000000000bf686

@end

