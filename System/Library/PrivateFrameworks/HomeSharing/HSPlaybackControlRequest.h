//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface HSPlaybackControlRequest
{
    unsigned int _interfaceID;	// 8 = 0x8
    long long _controlCommand;	// 16 = 0x10
}

@property(readonly, nonatomic) unsigned int interfaceID; // @synthesize interfaceID=_interfaceID;
@property(readonly, nonatomic) long long controlCommand; // @synthesize controlCommand=_controlCommand;
- (id)initWithInterfaceID:(unsigned int)arg1 controlCommand:(long long)arg2;	// IMP=0x0000000000016ebc

@end

