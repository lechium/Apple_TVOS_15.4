//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

#import <ContentKit/WFJSONObject-Protocol.h>
#import <ContentKit/WFJavaScriptCoreBridgeableObject-Protocol.h>
#import <ContentKit/WFNaming-Protocol.h>
#import <ContentKit/WFPropertyListObject-Protocol.h>

@interface NSString (WFContentProperty) <WFPropertyListObject, WFNaming, WFJavaScriptCoreBridgeableObject, WFJSONObject>
+ (id)wf_datedFilenameWithTypeString:(id)arg1 fileExtension:(id)arg2;	// IMP=0x0000000000006d0e
+ (id)wf_stringWithData:(id)arg1;	// IMP=0x00000000000a4096
- (id)stringByAppendingAsNewLine:(id)arg1;	// IMP=0x00000000000062cf
- (id)wf_filenameTruncatedToMaximumLength;	// IMP=0x0000000000006be3
- (id)wf_filenameTruncatedToMaximumLengthWithSuffix:(id)arg1;	// IMP=0x000000000000680c
- (id)gtm_stringByUnescapingFromHTML;	// IMP=0x000000000003b84c
- (id)gtm_stringByEscapingForAsciiHTML;	// IMP=0x000000000003b828
- (id)gtm_stringByEscapingForHTML;	// IMP=0x000000000003b807
- (id)gtm_stringByEscapingHTMLUsingTable:(CDStruct_6a59ab51 *)arg1 ofSize:(unsigned long long)arg2 escapingUnicode:(_Bool)arg3;	// IMP=0x000000000003b5ab
- (_Bool)wf_hasStrongRTLCharacter;	// IMP=0x000000000003e634
@property(readonly, copy, nonatomic) NSString *wfName;
- (id)wf_stringByReplacingNewlinesWithSpaces;	// IMP=0x00000000000994f9
- (_Bool)wf_stringContainsNewlineCharacters;	// IMP=0x000000000009949f
- (id)wf_stringByReplacingCharactersInSet:(id)arg1 withString:(id)arg2;	// IMP=0x00000000000993f1
- (_Bool)wf_stringContainsCharacterInSet:(id)arg1;	// IMP=0x00000000000993ce
- (id)wf_stringByTrimmingTrailingWhitespaceAndNewlineCharacters;	// IMP=0x0000000000099368
- (id)wf_stringByTrimmingLeadingWhitespaceAndNewlineCharacters;	// IMP=0x0000000000099302
- (id)wf_stringByTrimmingTrailingCharactersInSet:(id)arg1;	// IMP=0x000000000009926f
- (id)wf_stringByTrimmingLeadingCharactersInSet:(id)arg1;	// IMP=0x00000000000991e2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

