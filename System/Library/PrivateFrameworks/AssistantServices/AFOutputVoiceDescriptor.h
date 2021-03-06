//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/NSCopying-Protocol.h>
#import <AssistantServices/NSSecureCoding-Protocol.h>

@class NSString;

@interface AFOutputVoiceDescriptor : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_localizedDisplay;	// 8 = 0x8
    NSString *_localizedDisplayWithRegion;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000002a473
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x000000000002a7df
- (void).cxx_destruct;	// IMP=0x000000000002a5c2
@property(readonly, copy, nonatomic) NSString *localizedDisplayWithRegion; // @synthesize localizedDisplayWithRegion=_localizedDisplayWithRegion;
@property(readonly, copy, nonatomic) NSString *localizedDisplay; // @synthesize localizedDisplay=_localizedDisplay;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002a540
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002a47b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002a468
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002a35f
- (unsigned long long)hash;	// IMP=0x000000000002a320
- (id)_descriptionWithIndent:(unsigned long long)arg1;	// IMP=0x000000000002a160
- (id)description;	// IMP=0x000000000002a14c
- (id)initWithLocalizedDisplay:(id)arg1 localizedDisplayWithRegion:(id)arg2;	// IMP=0x000000000002a093
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;	// IMP=0x000000000002a84e

@end

