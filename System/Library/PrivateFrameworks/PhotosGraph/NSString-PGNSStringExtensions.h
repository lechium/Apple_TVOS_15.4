//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (PGNSStringExtensions)
- (unsigned long long)pg_levenshteinDistanceToString:(id)arg1;	// IMP=0x000000000025eca4
- (id)pg_stringByTrailingCharactersInSet:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x000000000025eb12
- (id)pg_stringByRemovingDates;	// IMP=0x000000000025e87f
- (id)_pg_stringByRemovingRegExPattern:(id)arg1;	// IMP=0x000000000025e4e6
- (id)pg_stringByRemovingParentheses;	// IMP=0x000000000025e480
- (id)pg_stringByRemovingParenthesesAndBrackets;	// IMP=0x000000000025e467
@end

