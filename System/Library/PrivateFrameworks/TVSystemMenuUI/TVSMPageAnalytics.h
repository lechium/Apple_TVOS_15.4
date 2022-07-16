//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface TVSMPageAnalytics : NSObject
{
    NSString *_pageContext;	// 8 = 0x8
    NSString *_pageId;	// 16 = 0x10
    NSString *_pageType;	// 24 = 0x18
}

+ (id)infoWithPageContext:(id)arg1 pageId:(id)arg2 pageType:(id)arg3;	// IMP=0x0000000000002700
- (void).cxx_destruct;	// IMP=0x00000000000028d0
@property(readonly, nonatomic) NSString *pageType; // @synthesize pageType=_pageType;
@property(readonly, nonatomic) NSString *pageId; // @synthesize pageId=_pageId;
@property(readonly, nonatomic) NSString *pageContext; // @synthesize pageContext=_pageContext;

@end
