//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableString, NSString;

@interface XRXMLSimpleStringElementParser
{
    NSMutableString *accumulator;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000001e3ec
- (void)_handleCompletion;	// IMP=0x000000000001e388
- (void)_handleCharacters:(id)arg1;	// IMP=0x000000000001e33b
- (id)collapsedStringValue;	// IMP=0x000000000001e1e3
@property(readonly, nonatomic) NSString *stringValue;

@end

