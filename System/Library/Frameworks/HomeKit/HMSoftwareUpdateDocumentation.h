//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKit/NSSecureCoding-Protocol.h>

@class HMHTMLDocument, HMPlainTextDocument, NSNumber;

@interface HMSoftwareUpdateDocumentation : NSObject <NSSecureCoding>
{
    HMHTMLDocument *_releaseNotesSummary;	// 8 = 0x8
    HMHTMLDocument *_releaseNotes;	// 16 = 0x10
    HMPlainTextDocument *_textReleaseNotes;	// 24 = 0x18
    HMHTMLDocument *_licenseAgreement;	// 32 = 0x20
    NSNumber *_licenseAgreementVersion;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001f9bbc
- (void).cxx_destruct;	// IMP=0x00000000001f9947
@property(readonly, copy) NSNumber *licenseAgreementVersion; // @synthesize licenseAgreementVersion=_licenseAgreementVersion;
@property(readonly, copy) HMHTMLDocument *licenseAgreement; // @synthesize licenseAgreement=_licenseAgreement;
@property(readonly, copy) HMPlainTextDocument *textReleaseNotes; // @synthesize textReleaseNotes=_textReleaseNotes;
@property(readonly, copy) HMHTMLDocument *releaseNotes; // @synthesize releaseNotes=_releaseNotes;
@property(readonly, copy) HMHTMLDocument *releaseNotesSummary; // @synthesize releaseNotesSummary=_releaseNotesSummary;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001f9797
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001f9627
- (id)description;	// IMP=0x00000000001f9618
- (id)debugDescription;	// IMP=0x00000000001f960c
- (id)initWithReleaseNotesSummary:(id)arg1 releaseNotes:(id)arg2 textReleaseNotes:(id)arg3 licenseAgreement:(id)arg4 licenseAgreementVersion:(id)arg5;	// IMP=0x00000000001f94bf
- (id)init;	// IMP=0x00000000001f9417

@end
