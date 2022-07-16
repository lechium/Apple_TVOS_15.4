//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SearchFoundation/NSCopying-Protocol.h>
#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/SFTitleSubtitleTuple-Protocol.h>

@class NSData, NSDictionary, NSString;

@interface SFTitleSubtitleTuple : NSObject <SFTitleSubtitleTuple, NSSecureCoding, NSCopying>
{
    NSString *_title;	// 8 = 0x8
    NSString *_subtitle;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001b1253
- (void).cxx_destruct;	// IMP=0x00000000001b1518
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001b145c
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001b130d
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001b125b
- (id)initWithProtobuf:(id)arg1;	// IMP=0x00000000001f11dc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
