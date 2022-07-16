//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SearchFoundation/NSCopying-Protocol.h>
#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/SFAppLink-Protocol.h>

@class NSData, NSDictionary, NSString, SFImage, SFPunchout;

@interface SFAppLink : NSObject <SFAppLink, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int imageAlign:1;
    } _has;	// 8 = 0x8
    int _imageAlign;	// 12 = 0xc
    NSString *_title;	// 16 = 0x10
    SFPunchout *_appPunchout;	// 24 = 0x18
    SFImage *_image;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000946a
- (void).cxx_destruct;	// IMP=0x0000000000009789
@property(nonatomic) int imageAlign; // @synthesize imageAlign=_imageAlign;
@property(retain, nonatomic) SFImage *image; // @synthesize image=_image;
@property(retain, nonatomic) SFPunchout *appPunchout; // @synthesize appPunchout=_appPunchout;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000968b
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000953c
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000948a
- (_Bool)hasImageAlign;	// IMP=0x000000000000947f
- (id)initWithProtobuf:(id)arg1;	// IMP=0x00000000001923e2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
