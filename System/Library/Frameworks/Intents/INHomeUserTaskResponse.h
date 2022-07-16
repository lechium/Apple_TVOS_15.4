//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Intents/INJSONSerializable-Protocol.h>
#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class INHomeUserTask, NSString;

@interface INHomeUserTaskResponse : NSObject <INJSONSerializable, NSCopying, NSSecureCoding>
{
    INHomeUserTask *_userTask;	// 8 = 0x8
    long long _taskOutcome;	// 16 = 0x10
}

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;	// IMP=0x00000000003aafb3
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000003aafab
- (void).cxx_destruct;	// IMP=0x00000000003aaf9b
@property(readonly, nonatomic) long long taskOutcome; // @synthesize taskOutcome=_taskOutcome;
@property(readonly, copy, nonatomic) INHomeUserTask *userTask; // @synthesize userTask=_userTask;
- (id)_dictionaryRepresentation;	// IMP=0x00000000003aae81
- (id)descriptionAtIndent:(unsigned long long)arg1;	// IMP=0x00000000003aada5
@property(readonly, copy) NSString *description;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;	// IMP=0x00000000003aacbb
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000003aac49
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000003aaba0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003aab95
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003aaaf7
@property(readonly) unsigned long long hash;
- (id)initWithUserTask:(id)arg1 taskOutcome:(long long)arg2;	// IMP=0x00000000003aaa03

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
