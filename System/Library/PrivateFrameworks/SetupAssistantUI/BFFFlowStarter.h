//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol BFFFlowDiverter;

@interface BFFFlowStarter : NSObject
{
    id <BFFFlowDiverter> _diverter;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000a193
@property(retain, nonatomic) id <BFFFlowDiverter> diverter; // @synthesize diverter=_diverter;
- (_Bool)controllerNeedsToRunForFlowItem:(id)arg1;	// IMP=0x000000000000a048
- (_Bool)controllerNeedsToRunForClass:(Class)arg1;	// IMP=0x0000000000009d8d
- (id)initWithFlowDiverter:(id)arg1;	// IMP=0x0000000000009d22

@end

