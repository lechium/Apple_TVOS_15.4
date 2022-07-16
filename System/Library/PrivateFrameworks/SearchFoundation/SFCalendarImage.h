//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/NSCopying-Protocol.h>
#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/SFCalendarImage-Protocol.h>

@class NSData, NSDate, NSDictionary, NSString;

@interface SFCalendarImage <SFCalendarImage, NSSecureCoding, NSCopying>
{
    NSDate *_date;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000018898
- (void).cxx_destruct;	// IMP=0x0000000000018885
@property(copy, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001874d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000186e8
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000018599
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000184d3
- (id)initWithDate:(id)arg1;	// IMP=0x00000000001dd735
- (id)initWithProtobuf:(id)arg1;	// IMP=0x00000000001ee745

// Remaining properties
@property(copy, nonatomic) NSString *accessibilityLabel;
@property(copy, nonatomic) NSString *contentType;
@property(nonatomic) double cornerRadius;
@property(nonatomic) int cornerRoundingStyle;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSString *identifier;
@property(copy) NSData *imageData;
@property(nonatomic) _Bool isTemplate;
@property(copy, nonatomic) NSString *keyColor;
@property(nonatomic) double scale;
@property(nonatomic) _Bool shouldCropToCircle;
@property(nonatomic) struct CGSize size;
@property(nonatomic) int source;
@property(readonly) Class superclass;

@end

