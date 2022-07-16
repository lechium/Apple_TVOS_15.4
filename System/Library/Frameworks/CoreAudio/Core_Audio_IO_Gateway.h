//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreAudio/Core_Audio_IO-Protocol.h>

__attribute__((visibility("hidden")))
@interface Core_Audio_IO_Gateway <Core_Audio_IO>
{
    shared_ptr_6f98d2b6 _client_gateway;	// 48 = 0x30
}

- (id).cxx_construct;	// IMP=0x00000000002349ac
- (void).cxx_destruct;	// IMP=0x000000000023499b
@property(nonatomic) shared_ptr_6f98d2b6 client_gateway; // @synthesize client_gateway=_client_gateway;
- (void)handle_server_disconnected;	// IMP=0x00000000002348e1
- (void)start_after_io_device_change:(unsigned int)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000234708
- (void)stop_before_io_device_change:(unsigned int)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000023452f
- (void)handle_io_message:(struct Device_Token)arg1 with:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000023403f
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0000000000233f88

@end

