//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class WebUserContentURLPatternPrivate;

@interface WebUserContentURLPattern : NSObject
{
    WebUserContentURLPatternPrivate *_private;	// 8 = 0x8
}

- (_Bool)matchesURL:(id)arg1;	// IMP=0x0000000000129580
- (_Bool)matchesSubdomains;	// IMP=0x0000000000129570
- (id)host;	// IMP=0x0000000000129550
- (id)scheme;	// IMP=0x0000000000129530
- (_Bool)isValid;	// IMP=0x0000000000129510
- (void)dealloc;	// IMP=0x00000000001294c0
- (id)initWithPatternString:(id)arg1;	// IMP=0x0000000000129250

@end

