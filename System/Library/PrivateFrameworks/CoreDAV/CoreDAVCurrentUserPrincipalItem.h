//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CoreDAVHrefItem, CoreDAVItemWithNoChildren;

@interface CoreDAVCurrentUserPrincipalItem
{
    CoreDAVHrefItem *_href;	// 56 = 0x38
    CoreDAVItemWithNoChildren *_unauthenticated;	// 64 = 0x40
}

+ (id)copyParseRules;	// IMP=0x0000000000053642
- (void).cxx_destruct;	// IMP=0x00000000000538db
@property(retain, nonatomic) CoreDAVItemWithNoChildren *unauthenticated; // @synthesize unauthenticated=_unauthenticated;
@property(retain, nonatomic) CoreDAVHrefItem *href; // @synthesize href=_href;
- (id)description;	// IMP=0x0000000000053523
- (id)init;	// IMP=0x00000000000534fd

@end
