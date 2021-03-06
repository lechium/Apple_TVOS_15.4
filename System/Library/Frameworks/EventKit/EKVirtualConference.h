//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <EventKit/NSCopying-Protocol.h>

@class NSArray, NSString, NSURL;

@interface EKVirtualConference : NSObject <NSCopying>
{
    NSString *_title;	// 8 = 0x8
    NSArray *_joinMethods;	// 16 = 0x10
    NSString *_conferenceDetails;	// 24 = 0x18
    NSString *_serializationBlockTitle;	// 32 = 0x20
    unsigned long long _source;	// 40 = 0x28
}

+ (void)virtualConferenceForRoomType:(id)arg1 completion:(CDUnknownBlockType)arg2 queue:(id)arg3;	// IMP=0x00000000000b903f
- (void).cxx_destruct;	// IMP=0x00000000000ba47e
@property(nonatomic) unsigned long long source; // @synthesize source=_source;
@property(retain, nonatomic) NSString *serializationBlockTitle; // @synthesize serializationBlockTitle=_serializationBlockTitle;
@property(retain, nonatomic) NSString *conferenceDetails; // @synthesize conferenceDetails=_conferenceDetails;
@property(retain, nonatomic) NSArray *joinMethods; // @synthesize joinMethods=_joinMethods;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000ba32d
- (id)description;	// IMP=0x00000000000ba293
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000ba0d9
@property(readonly, nonatomic) NSURL *firstPhoneNumber;
@property(readonly, nonatomic) _Bool isWritable;
- (id)initWithTitle:(id)arg1 joinMethods:(id)arg2 conferenceDetails:(id)arg3;	// IMP=0x00000000000b8f67

@end

