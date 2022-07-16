//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/NSCopying-Protocol.h>
#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/SFCalendarColor-Protocol.h>

@class NSData, NSDictionary, NSString;

@interface SFCalendarColor <SFCalendarColor, NSSecureCoding, NSCopying>
{
    NSString *_eventIdentifier;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001e40fc
- (void).cxx_destruct;	// IMP=0x00000000001e40e9
@property(copy, nonatomic) NSString *eventIdentifier; // @synthesize eventIdentifier=_eventIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001e4062
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001e3f13
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001e3e61
- (id)initWithProtobuf:(id)arg1;	// IMP=0x00000000001a2881

// Remaining properties
@property(nonatomic) double alphaComponent;
@property(nonatomic) double blueComponent;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) double greenComponent;
@property(readonly) unsigned long long hash;
@property(nonatomic) double redComponent;
@property(readonly) Class superclass;

@end

