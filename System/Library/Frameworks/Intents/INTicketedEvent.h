//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Intents/INJSONSerializable-Protocol.h>
#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class CLPlacemark, INDateComponentsRange, NSString;

@interface INTicketedEvent : NSObject <INJSONSerializable, NSCopying, NSSecureCoding>
{
    long long _category;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    INDateComponentsRange *_eventDuration;	// 24 = 0x18
    CLPlacemark *_location;	// 32 = 0x20
}

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;	// IMP=0x00000000003e233a
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000003e2332
- (void).cxx_destruct;	// IMP=0x00000000003e22ff
@property(readonly, copy, nonatomic) CLPlacemark *location; // @synthesize location=_location;
@property(readonly, copy, nonatomic) INDateComponentsRange *eventDuration; // @synthesize eventDuration=_eventDuration;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) long long category; // @synthesize category=_category;
- (id)_dictionaryRepresentation;	// IMP=0x00000000003e2138
- (id)descriptionAtIndent:(unsigned long long)arg1;	// IMP=0x00000000003e205c
@property(readonly, copy) NSString *description;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;	// IMP=0x00000000003e1ee6
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000003e1e4a
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000003e1ce6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003e1cdb
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003e1c01
@property(readonly) unsigned long long hash;
- (id)initWithCategory:(long long)arg1 name:(id)arg2 eventDuration:(id)arg3 location:(id)arg4;	// IMP=0x00000000003e1a73

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

