//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/NSCopying-Protocol.h>
#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/SFCommandButtonItem-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, SFCommand, SFImage;

@interface SFCommandButtonItem <SFCommandButtonItem, NSSecureCoding, NSCopying>
{
    SFImage *_image;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
    SFCommand *_command;	// 24 = 0x18
    NSArray *_previewButtonItems;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000297aa
- (void).cxx_destruct;	// IMP=0x0000000000029757
@property(copy, nonatomic) NSArray *previewButtonItems; // @synthesize previewButtonItems=_previewButtonItems;
@property(retain, nonatomic) SFCommand *command; // @synthesize command=_command;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) SFImage *image; // @synthesize image=_image;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000295f4
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000294a5
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000293f3
- (id)initWithProtobuf:(id)arg1;	// IMP=0x00000000001ddb73

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) unsigned long long uniqueId;

@end

