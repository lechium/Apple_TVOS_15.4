//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/NSSecureCoding-Protocol.h>

@class NSDictionary, NSNumber, NSString;

@interface AFMetrics : NSObject <NSSecureCoding>
{
    NSString *_originalCommandId;	// 8 = 0x8
    long long _category;	// 16 = 0x10
    NSDictionary *_eventInfo;	// 24 = 0x18
    NSNumber *_duration;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000bcd33
- (void).cxx_destruct;	// IMP=0x00000000000bd2c4
@property(retain, nonatomic) NSNumber *duration; // @synthesize duration=_duration;
@property(copy, nonatomic) NSDictionary *eventInfo; // @synthesize eventInfo=_eventInfo;
@property(nonatomic) long long category; // @synthesize category=_category;
@property(copy, nonatomic) NSString *originalCommandId; // @synthesize originalCommandId=_originalCommandId;
- (id)description;	// IMP=0x00000000000bd138
- (id)categoryString;	// IMP=0x00000000000bcf86
- (double)_roundDouble:(double)arg1 toSignificantDigits:(unsigned long long)arg2;	// IMP=0x00000000000bcf05
- (id)aceMetrics;	// IMP=0x00000000000bcd3b
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000bcb60
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000bcac7
- (id)initWithOriginalCommandId:(id)arg1 category:(long long)arg2 eventInfo:(id)arg3 duration:(id)arg4;	// IMP=0x00000000000bc9dc
- (id)initWithOriginalCommandId:(id)arg1 category:(long long)arg2 duration:(id)arg3;	// IMP=0x00000000000bc9c4

@end

