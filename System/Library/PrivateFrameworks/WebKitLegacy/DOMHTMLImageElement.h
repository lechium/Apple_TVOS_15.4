//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, NSURL;

@interface DOMHTMLImageElement
{
}

@property(readonly, copy) NSURL *absoluteImageURL;
@property(readonly, copy) NSString *altDisplayString;
@property(readonly) int y;
@property(readonly) int x;
@property(readonly) int naturalWidth;
@property(readonly) int naturalHeight;
@property(copy) NSString *lowsrc;
@property(readonly) _Bool complete;
@property int width;
@property int vspace;
@property(copy) NSString *useMap;
- (id)currentSrc;	// IMP=0x000000000005ae40
- (void)setSizes:(id)arg1;	// IMP=0x000000000005acf0
- (id)sizes;	// IMP=0x000000000005abe0
- (void)setSrcset:(id)arg1;	// IMP=0x000000000005aa90
- (id)srcset;	// IMP=0x000000000005a980
@property(copy) NSString *src;
@property(copy) NSString *longDesc;
@property _Bool isMap;
@property int hspace;
@property int height;
- (void)setCrossOrigin:(id)arg1;	// IMP=0x0000000000059cd0
- (id)crossOrigin;	// IMP=0x0000000000059b80
@property(copy) NSString *border;
@property(copy) NSString *alt;
@property(copy) NSString *align;
@property(copy) NSString *name;
- (id)mimeType;	// IMP=0x000000000009a6a0
- (id)dataRepresentation:(_Bool)arg1;	// IMP=0x000000000009a4b0

@end

