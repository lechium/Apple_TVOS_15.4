//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface HAPArrayWrapper
{
    NSArray *_field;	// 24 = 0x18
    CDUnknownBlockType _objectCreator;	// 32 = 0x20
}

+ (id)wrappertlv:(unsigned long long)arg1 name:(id)arg2 objectCreator:(CDUnknownBlockType)arg3;	// IMP=0x00000000000e900d
- (void).cxx_destruct;	// IMP=0x00000000000e8fdc
@property(copy, nonatomic) CDUnknownBlockType objectCreator; // @synthesize objectCreator=_objectCreator;
@property(retain, nonatomic) NSArray *field; // @synthesize field=_field;

@end

