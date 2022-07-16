//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VoiceShortcuts/NSCopying-Protocol.h>

@protocol WFPropertyListObject;

@interface WFWorkflowRunQueueDescriptor : NSObject <NSCopying>
{
    unsigned long long _type;	// 8 = 0x8
    id <WFPropertyListObject> _queueIdentifier;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000018326
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000182e8
- (id)description;	// IMP=0x000000000001825f
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001817e
- (unsigned long long)hash;	// IMP=0x00000000000180f1
- (id)initWithType:(unsigned long long)arg1 identifier:(id)arg2;	// IMP=0x0000000000018068

@end

