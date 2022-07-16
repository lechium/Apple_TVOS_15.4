//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <InAppMessagesCore/NSCopying-Protocol.h>

@class NSString, NSURL;

@interface IAMImage : NSObject <NSCopying>
{
    unsigned int _width;	// 8 = 0x8
    unsigned int _height;	// 12 = 0xc
    NSString *_identifier;	// 16 = 0x10
    NSURL *_url;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000000588c
@property(readonly, nonatomic) unsigned int height; // @synthesize height=_height;
@property(readonly, nonatomic) unsigned int width; // @synthesize width=_width;
@property(readonly, copy, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000005811
- (id)initWithICImage:(id)arg1;	// IMP=0x00000000000056f6
- (id)initWithIdentifier:(id)arg1 url:(id)arg2 width:(unsigned int)arg3 height:(unsigned int)arg4;	// IMP=0x000000000000562d
- (id)initWithIdentifier:(id)arg1 url:(id)arg2;	// IMP=0x0000000000005574

@end

