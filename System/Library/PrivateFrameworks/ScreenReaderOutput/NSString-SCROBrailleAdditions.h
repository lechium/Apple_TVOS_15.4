//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (SCROBrailleAdditions)
- (struct _NSRange)rangeOfWordAfterWordAtIndex:(long long)arg1;	// IMP=0x0000000000006d9b
- (struct _NSRange)rangeOfWordBeforeWordAtIndex:(long long)arg1;	// IMP=0x0000000000006cb7
- (struct _NSRange)rangeOfWordContainingIndex:(long long)arg1;	// IMP=0x0000000000006a5e
- (struct _NSRange)_rangeIsolatingIllegalCharacters:(struct _NSRange)arg1 forwards:(_Bool)arg2;	// IMP=0x00000000000069b8
- (id)_legalWhiteSpaceSet;	// IMP=0x0000000000006892
- (id)_illegalCharacterSet;	// IMP=0x0000000000006826
@end

