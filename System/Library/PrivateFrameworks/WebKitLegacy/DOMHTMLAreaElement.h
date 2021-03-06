//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, NSURL;

@interface DOMHTMLAreaElement
{
}

@property(readonly, copy) NSString *hashName;
@property(readonly, copy) NSString *search;
@property(readonly, copy) NSString *pathname;
@property(readonly, copy) NSString *port;
@property(readonly, copy) NSString *hostname;
@property(readonly, copy) NSString *host;
@property(readonly, copy) NSString *protocol;
- (id)origin;	// IMP=0x0000000000046f40
@property(copy) NSString *href;
- (id)relList;	// IMP=0x0000000000046ba0
@property(readonly, copy) NSURL *absoluteLinkURL;
@property(copy) NSString *accessKey;
@property(copy) NSString *target;
@property(copy) NSString *shape;
- (void)setRel:(id)arg1;	// IMP=0x0000000000046240
- (id)rel;	// IMP=0x0000000000046130
- (void)setPing:(id)arg1;	// IMP=0x0000000000045fe0
- (id)ping;	// IMP=0x0000000000045ed0
@property _Bool noHref;
@property(copy) NSString *coords;
@property(copy) NSString *alt;
- (id)absoluteQuadsWithOwner:(id)arg1;	// IMP=0x000000000009a320
- (id)boundingBoxesWithOwner:(id)arg1;	// IMP=0x000000000009a270
- (struct _WKQuad)absoluteQuadWithOwner:(id)arg1;	// IMP=0x000000000009a000
- (struct CGRect)boundingBoxWithOwner:(id)arg1;	// IMP=0x0000000000099de0

@end

