//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface DDMatch : NSObject
{
    NSString *_matchedString;	// 8 = 0x8
    struct _NSRange _matchedRange;	// 16 = 0x10
}

+ (id)resultWithDDScannerResult:(id)arg1 originalString:(id)arg2;	// IMP=0x000000000000138c
+ (id)resultWithDDScannerResult:(id)arg1;	// IMP=0x0000000000001378
- (void).cxx_destruct;	// IMP=0x000000000000173e
@property(readonly, nonatomic) struct _NSRange matchedRange; // @synthesize matchedRange=_matchedRange;
@property(readonly, nonatomic) NSString *matchedString; // @synthesize matchedString=_matchedString;
- (id)initWithDDScannerResult:(id)arg1 originalString:(id)arg2;	// IMP=0x0000000000001699
- (id)initWithDDScannerResult:(id)arg1;	// IMP=0x000000000000162f
- (void)commonInitWithDDScannerResult:(id)arg1 originalString:(id)arg2;	// IMP=0x0000000000001568

@end

