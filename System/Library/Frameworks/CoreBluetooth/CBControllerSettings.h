//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreBluetooth/CUXPCCodable-Protocol.h>

@interface CBControllerSettings : NSObject <CUXPCCodable>
{
    BOOL _setupAssistantIfNoKeyboard;	// 8 = 0x8
    BOOL _setupAssistantIfNoPointingDevice;	// 9 = 0x9
}

@property(nonatomic) BOOL setupAssistantIfNoPointingDevice; // @synthesize setupAssistantIfNoPointingDevice=_setupAssistantIfNoPointingDevice;
@property(nonatomic) BOOL setupAssistantIfNoKeyboard; // @synthesize setupAssistantIfNoKeyboard=_setupAssistantIfNoKeyboard;
- (id)descriptionWithLevel:(int)arg1;	// IMP=0x0000000000027a70
- (id)description;	// IMP=0x0000000000027a50
- (void)encodeWithXPCObject:(id)arg1;	// IMP=0x00000000000279f0
- (id)initWithXPCObject:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000027850

@end

