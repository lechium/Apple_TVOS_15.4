//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CalendarDatabase/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface CalAlarmMetadata : NSObject <NSSecureCoding>
{
    NSArray *_attach;	// 8 = 0x8
    NSArray *_attendee;	// 16 = 0x10
    NSString *_description;	// 24 = 0x18
    NSString *_summary;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000005ac6f
+ (id)metadataWithData:(id)arg1;	// IMP=0x000000000005aa85
- (void).cxx_destruct;	// IMP=0x000000000005b07b
@property(retain) NSString *summary; // @synthesize summary=_summary;
@property(retain) NSString *description; // @synthesize description=_description;
@property(retain) NSArray *attendee; // @synthesize attendee=_attendee;
@property(retain) NSArray *attach; // @synthesize attach=_attach;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000005ad0c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000005ac77
- (id)dataRepresentation;	// IMP=0x000000000005ab8f
- (void)applyToAlarm:(id)arg1;	// IMP=0x000000000005a9fd
- (id)initWithICSAlarm:(id)arg1;	// IMP=0x000000000005a8d2

@end

