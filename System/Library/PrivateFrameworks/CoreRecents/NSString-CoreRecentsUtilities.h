//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (CoreRecentsUtilities)
- (id)cr_lowercaseStringWithStandardLocale;	// IMP=0x00000000000081b8
- (id)cr_uniqueFilenameWithRespectToFilenames:(id)arg1;	// IMP=0x0000000000007f27
- (id)cr_copyIDNAEncodedEmailAddress;	// IMP=0x0000000000007ef3
- (id)cr_copyIDNADecodedEmailAddress;	// IMP=0x0000000000007ebf
- (id)cr_copyStringByEncodingIDNAInRange:(struct _NSRange)arg1;	// IMP=0x0000000000007e1f
- (id)cr_copyStringByDecodingIDNAInRange:(struct _NSRange)arg1;	// IMP=0x0000000000007b69
- (struct _NSRange)cr_rangeOfAddressDomain;	// IMP=0x0000000000007805
@end

