//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AAInheritanceContactController, NSString;

@interface AAUIInheritanceAccessKeyPDFGenerator : NSObject
{
    NSString *_ownerDisplayName;	// 8 = 0x8
    NSString *_ownerFirstName;	// 16 = 0x10
    NSString *_ownerEmailAddress;	// 24 = 0x18
    NSString *_contactDisplayName;	// 32 = 0x20
    AAInheritanceContactController *_contactController;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000004652a
- (void)_renderFooterWithPageRect:(struct CGRect)arg1 yPosition:(double)arg2;	// IMP=0x00000000000462e6
- (void)_renderAccessKeyWithPageRect:(struct CGRect)arg1 yPosition:(double)arg2;	// IMP=0x0000000000046055
- (double)_renderQRCodeImageWithPageRect:(struct CGRect)arg1 yPosition:(double)arg2;	// IMP=0x0000000000045e7a
- (double)_renderRectBoxWithPageRect:(struct CGRect)arg1 yPosition:(double)arg2 drawContext:(struct CGContext *)arg3;	// IMP=0x0000000000045d16
- (double)_renderMessageWithPageRect:(struct CGRect)arg1 yPosition:(double)arg2;	// IMP=0x0000000000045a7a
- (id)_attributedStringWithField:(id)arg1 value:(id)arg2;	// IMP=0x0000000000045800
- (double)_renderAccountDetailsWithPageRect:(struct CGRect)arg1 yPosition:(double)arg2;	// IMP=0x00000000000455b6
- (double)_renderTitleWithPageRect:(struct CGRect)arg1;	// IMP=0x0000000000045340
- (void)_renderLogoImageWithPageRect:(struct CGRect)arg1;	// IMP=0x00000000000451b9
- (id)_pdfMetaData;	// IMP=0x000000000004510e
- (id)createPDFDocumentData;	// IMP=0x0000000000044e3c
- (id)initWithAppleAccount:(id)arg1 localContactInfo:(id)arg2;	// IMP=0x0000000000044c32

@end

