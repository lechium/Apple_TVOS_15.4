//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface PKTextRangeHyperlink : NSObject
{
    NSString *_linkText;	// 8 = 0x8
    CDUnknownBlockType _action;	// 16 = 0x10
}

+ (id)hyperlinkSourcesFromApplyFooter:(id)arg1 linkTapped:(CDUnknownBlockType)arg2;	// IMP=0x000000000030825a
- (void).cxx_destruct;	// IMP=0x000000000030872e
@property(readonly, copy, nonatomic) CDUnknownBlockType action; // @synthesize action=_action;
@property(readonly, copy, nonatomic) NSString *linkText; // @synthesize linkText=_linkText;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003085ed
- (unsigned long long)hash;	// IMP=0x0000000000308561
- (id)initWithLinkText:(id)arg1 action:(CDUnknownBlockType)arg2;	// IMP=0x0000000000308183

@end
