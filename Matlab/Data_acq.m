%% Save data from Simulink
save('data_PID_sin.mat','sim_pos','sim_vel','sim_cur','sim_con','sim_int','sim_time');
plot(sim_time,sim_pos);