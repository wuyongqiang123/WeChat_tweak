//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "MMLoadSessionExt.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "WXGSelectTimeViewControllerDelegate.h"

@class MMTableView, NSDate, NSMutableArray, NSString, UIActivityIndicatorView, UIButton, UIImageView, UILabel, UIView, WXGSelectTimeViewController;

@interface WXGChatLogSessionViewController : MMUIViewController <UITableViewDataSource, UITableViewDelegate, MMLoadSessionExt, WXGSelectTimeViewControllerDelegate>
{
    unsigned long long m_curMaxDataCount;
    NSDate *m_beginBeginDate;
    NSDate *m_endEndDate;
    NSDate *m_beginDate;
    NSDate *m_endDate;
    _Bool m_selectAllTime;
    _Bool m_selectTextOnly;
    _Bool _doneWithPop;
    _Bool _showSize;
    _Bool _showSelectTime;
    _Bool _showSelectTextOnly;
    NSString *_rightNavigationTitleString;
    NSString *_leftNavigationTitleString;
    NSString *_emptyTipString;
    NSString *_titleString;
    NSString *_selectTimeTitle;
    NSString *_selectContentTitle;
    NSString *_showNumberSessionTip;
    NSString *_showTimeSelectTip;
    NSString *_showCotentSelectTip;
    id <WXGChatLogSessionViewControllerDelegate> _delegate;
    MMTableView *_sessionTableView;
    UIImageView *_footerImageView;
    UIButton *_selectAllButton;
    UIButton *_moreSelectButton;
    UIButton *_nextStepButton;
    UILabel *_moreSelectContentLabel;
    UILabel *_emptyTipLabel;
    UIView *_infoPannel;
    UILabel *_sizeLabel;
    UILabel *_selectTimeLabel;
    UILabel *_selectContentLabel;
    NSMutableArray *_selectedSessionArray;
    UIActivityIndicatorView *_loadingIndicatorView;
    WXGSelectTimeViewController *_selectTimeVC;
}

- (void).cxx_destruct;
- (void)dealloc;
@property(nonatomic) __weak id <WXGChatLogSessionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool doneWithPop; // @synthesize doneWithPop=_doneWithPop;
@property(retain, nonatomic) UILabel *emptyTipLabel; // @synthesize emptyTipLabel=_emptyTipLabel;
@property(retain, nonatomic) NSString *emptyTipString; // @synthesize emptyTipString=_emptyTipString;
@property(retain, nonatomic) UIImageView *footerImageView; // @synthesize footerImageView=_footerImageView;
- (id)getCurrentDateWithoutHourMinSecond;
- (unsigned long long)getDataSize:(id)arg1;
- (id)getDataSizeShowString:(id)arg1;
- (id)getSelectButtonTitle;
- (struct CGRect)getTableViewFrame;
@property(retain, nonatomic) UIView *infoPannel; // @synthesize infoPannel=_infoPannel;
- (id)init;
- (void)initData;
- (void)initFooterPannelView;
- (void)initInfoPannel;
- (void)initView;
- (_Bool)isSessionDataEmpty;
- (_Bool)isSessionDataFull;
@property(retain, nonatomic) NSString *leftNavigationTitleString; // @synthesize leftNavigationTitleString=_leftNavigationTitleString;
- (void)loadMoreData;
@property(retain, nonatomic) UIActivityIndicatorView *loadingIndicatorView; // @synthesize loadingIndicatorView=_loadingIndicatorView;
@property(retain, nonatomic) UIButton *moreSelectButton; // @synthesize moreSelectButton=_moreSelectButton;
@property(retain, nonatomic) UILabel *moreSelectContentLabel; // @synthesize moreSelectContentLabel=_moreSelectContentLabel;
@property(retain, nonatomic) UIButton *nextStepButton; // @synthesize nextStepButton=_nextStepButton;
- (void)onCancel;
- (void)onDone;
- (void)onFilterdDataFinished;
- (void)onLoadDataFinished;
- (void)onLoadSessionDataFinished;
- (void)onReloadDataItem;
- (void)onSelectTime;
- (void)onSelectTimeViewCancel;
- (void)onSelectTimeViewCompleteWithBeginDate:(id)arg1 endDate:(id)arg2 selectAllTime:(_Bool)arg3 selectTextOnly:(_Bool)arg4;
- (void)onSelecteAll;
- (void)p_popViewController;
- (void)resetBeginDate;
- (void)resetEmptyTipLabelWithTip:(id)arg1;
@property(retain, nonatomic) NSString *rightNavigationTitleString; // @synthesize rightNavigationTitleString=_rightNavigationTitleString;
@property(retain, nonatomic) UIButton *selectAllButton; // @synthesize selectAllButton=_selectAllButton;
@property(retain, nonatomic) UILabel *selectContentLabel; // @synthesize selectContentLabel=_selectContentLabel;
@property(retain, nonatomic) NSString *selectContentTitle; // @synthesize selectContentTitle=_selectContentTitle;
@property(retain, nonatomic) UILabel *selectTimeLabel; // @synthesize selectTimeLabel=_selectTimeLabel;
@property(retain, nonatomic) NSString *selectTimeTitle; // @synthesize selectTimeTitle=_selectTimeTitle;
@property(retain, nonatomic) WXGSelectTimeViewController *selectTimeVC; // @synthesize selectTimeVC=_selectTimeVC;
@property(retain, nonatomic) NSMutableArray *selectedSessionArray; // @synthesize selectedSessionArray=_selectedSessionArray;
@property(retain, nonatomic) MMTableView *sessionTableView; // @synthesize sessionTableView=_sessionTableView;
@property(retain, nonatomic) NSString *showCotentSelectTip; // @synthesize showCotentSelectTip=_showCotentSelectTip;
@property(retain, nonatomic) NSString *showNumberSessionTip; // @synthesize showNumberSessionTip=_showNumberSessionTip;
@property(nonatomic) _Bool showSelectTextOnly; // @synthesize showSelectTextOnly=_showSelectTextOnly;
@property(nonatomic) _Bool showSelectTime; // @synthesize showSelectTime=_showSelectTime;
@property(nonatomic) _Bool showSize; // @synthesize showSize=_showSize;
@property(retain, nonatomic) NSString *showTimeSelectTip; // @synthesize showTimeSelectTip=_showTimeSelectTip;
@property(retain, nonatomic) UILabel *sizeLabel; // @synthesize sizeLabel=_sizeLabel;
@property(retain, nonatomic) NSString *titleString; // @synthesize titleString=_titleString;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)updateFooterPannelView;
- (void)updateInfoPannel;
- (void)updateTableFooterView;
- (void)updateTableView;
- (void)updateView;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (_Bool)whetherSelectAllTime;
- (_Bool)whetherSessionItemSelected:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
