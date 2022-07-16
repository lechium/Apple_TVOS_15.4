//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFDictionaryConvertible-Protocol.h>
#import <AssistantServices/NSCopying-Protocol.h>
#import <AssistantServices/NSSecureCoding-Protocol.h>

@class NSDate, NSString;

@interface AFHomeAnnouncement : NSObject <NSCopying, NSSecureCoding, AFDictionaryConvertible>
{
    NSString *_identifier;	// 8 = 0x8
    unsigned long long _startedHostTime;	// 16 = 0x10
    unsigned long long _finishedHostTime;	// 24 = 0x18
    NSDate *_startedDate;	// 32 = 0x20
    NSDate *_finishedDate;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000102ebf
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x0000000000103866
- (void).cxx_destruct;	// IMP=0x0000000000103548
@property(readonly, copy, nonatomic) NSDate *finishedDate; // @synthesize finishedDate=_finishedDate;
@property(readonly, copy, nonatomic) NSDate *startedDate; // @synthesize startedDate=_startedDate;
@property(readonly, nonatomic) unsigned long long finishedHostTime; // @synthesize finishedHostTime=_finishedHostTime;
@property(readonly, nonatomic) unsigned long long startedHostTime; // @synthesize startedHostTime=_startedHostTime;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)buildDictionaryRepresentation;	// IMP=0x00000000001033e0
- (id)initWithDictionaryRepresentation:(id)arg1;	// IMP=0x000000000010315a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000103057
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000102ec7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000102eb4
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000102d1d
@property(readonly) unsigned long long hash;
- (id)_descriptionWithIndent:(unsigned long long)arg1;	// IMP=0x0000000000102959
@property(readonly, copy) NSString *description;
- (id)initWithIdentifier:(id)arg1 startedHostTime:(unsigned long long)arg2 finishedHostTime:(unsigned long long)arg3 startedDate:(id)arg4 finishedDate:(id)arg5;	// IMP=0x0000000000102846
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;	// IMP=0x00000000001038d5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

